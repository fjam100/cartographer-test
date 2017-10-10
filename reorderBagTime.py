#!/usr/bin/env python
import rosbag

with rosbag.Bag('output.bag', 'w') as outbag:
    for topic, msg, t in rosbag.Bag('/net/divisions/Product-Development/RS Biz Dev/Customers/Nexteer/20170922_KickoffSiteVisit/bag_for_mapping_2017-09-22-12-47-29.bag').read_messages():
        # This also replaces tf timestamps under the assumption 
        # that all transforms in the message share the same timestamp
        if topic == "/tf" and msg.transforms:
            outbag.write(topic, msg, msg.transforms[0].header.stamp)
        else:
            outbag.write(topic, msg, msg.header.stamp if msg._has_header else t)