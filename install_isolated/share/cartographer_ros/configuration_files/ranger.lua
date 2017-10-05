-- Copyright 2016 The Cartographer Authors
--
-- Licensed under the Apache License, Version 2.0 (the "License");
-- you may not use this file except in compliance with the License.
-- You may obtain a copy of the License at
--
--      http://www.apache.org/licenses/LICENSE-2.0
--
-- Unless required by applicable law or agreed to in writing, software
-- distributed under the License is distributed on an "AS IS" BASIS,
-- WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
-- See the License for the specific language governing permissions and
-- limitations under the License.

include "map_builder.lua"
include "trajectory_builder.lua"

options = {
  map_builder = MAP_BUILDER,
  trajectory_builder = TRAJECTORY_BUILDER,
  map_frame = "world",
  tracking_frame = "robot",
  published_frame = "robot",
  odom_frame = "odom_combined",
  provide_odom_frame = true,
  use_odometry = true,
  num_laser_scans = 1,
--use_laser_scan = true,
  num_multi_echo_laser_scans = 0,
--  use_multi_echo_laser_scan = false,
  num_subdivisions_per_laser_scan = 80,
  num_point_clouds = 0,
  lookup_transform_timeout_sec = 0.1,
  submap_publish_period_sec = 0.3,
  pose_publish_period_sec = 5e-3,
  trajectory_publish_period_sec = 30e-3,
  rangefinder_sampling_ratio = 1.,
  odometry_sampling_ratio = 1.,
  imu_sampling_ratio = 1.,
}

-- Map builder configurations

MAP_BUILDER.use_trajectory_builder_2d = true

-- Trajectory builder configurations

TRAJECTORY_BUILDER_2D.max_range=60
TRAJECTORY_BUILDER_2D.scans_per_accumulation = 80
TRAJECTORY_BUILDER_2D.use_imu_data = false
TRAJECTORY_BUILDER_2D.use_online_correlative_scan_matching = true
TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.linear_search_window=0.05
TRAJECTORY_BUILDER_2D.real_time_correlative_scan_matcher.angular_search_window=math.rad(15.)
TRAJECTORY_BUILDER_2D.ceres_scan_matcher.occupied_space_weight = 1e2
TRAJECTORY_BUILDER_2D.ceres_scan_matcher.translation_weight  = 3e2
TRAJECTORY_BUILDER_2D.ceres_scan_matcher.rotation_weight = 3e2
TRAJECTORY_BUILDER_2D.submaps.num_range_data = 290
TRAJECTORY_BUILDER_2D.motion_filter.max_time_seconds = 10
TRAJECTORY_BUILDER_2D.motion_filter.max_distance_meters = 0.1
TRAJECTORY_BUILDER_2D.motion_filter.max_angle_radians = math.rad(0.21)


-- Sparse pose graph configurations

SPARSE_POSE_GRAPH.optimize_every_n_scans = 290
SPARSE_POSE_GRAPH.constraint_builder.loop_closure_translation_weight= 75e5
SPARSE_POSE_GRAPH.constraint_builder.loop_closure_translation_weight= 75e5
SPARSE_POSE_GRAPH.max_num_final_iterations=700
SPARSE_POSE_GRAPH.matcher_translation_weight = 1e5
SPARSE_POSE_GRAPH.matcher_rotation_weight = 1e5
SPARSE_POSE_GRAPH.optimization_problem.consecutive_scan_translation_penalty_factor = 1e4
SPARSE_POSE_GRAPH.optimization_problem.consecutive_scan_rotation_penalty_factor = 1e4
SPARSE_POSE_GRAPH.optimization_problem.huber_scale=1e2
SPARSE_POSE_GRAPH.optimization_problem.rotation_weight = 30e5
SPARSE_POSE_GRAPH.constraint_builder.ceres_scan_matcher.occupied_space_weight = 25
SPARSE_POSE_GRAPH.constraint_builder.ceres_scan_matcher.translation_weight = 15
SPARSE_POSE_GRAPH.constraint_builder.ceres_scan_matcher.rotation_weight = 10


return options

