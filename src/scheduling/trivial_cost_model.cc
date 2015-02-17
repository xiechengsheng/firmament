// The Firmament project
// Copyright (c) 2014 Malte Schwarzkopf <malte.schwarzkopf@cl.cam.ac.uk>
//
// Trivial scheduling cost model for testing purposes.

#include <string>

#include "scheduling/trivial_cost_model.h"

namespace firmament {

TrivialCostModel::TrivialCostModel() { }

Cost_t TrivialCostModel::TaskToUnscheduledAggCost(const TaskDescriptor& td) {
  return 5LL;
}

Cost_t TrivialCostModel::UnscheduledAggToSinkCost(const JobDescriptor& jd) {
  return 0LL;
}

Cost_t TrivialCostModel::TaskToClusterAggCost(TaskID_t task_id) {
  return 2LL;
}

Cost_t TrivialCostModel::TaskToResourceNodeCost(TaskID_t task_id,
                                               ResourceID_t resource_id) {
  return 0LL;
}

Cost_t TrivialCostModel::ClusterAggToResourceNodeCost(ResourceID_t target) {
  return 0LL;
}

Cost_t TrivialCostModel::ResourceNodeToResourceNodeCost(
    ResourceID_t source,
    ResourceID_t destination) {
  return 0LL;
}

Cost_t TrivialCostModel::LeafResourceNodeToSinkCost(ResourceID_t resource_id) {
  return 0LL;
}

Cost_t TrivialCostModel::TaskContinuationCost(TaskID_t task_id) {
  return 0ULL;
}

Cost_t TrivialCostModel::TaskPreemptionCost(TaskID_t task_id) {
  return 0ULL;
}

Cost_t TrivialCostModel::TaskToEquivClassAggregator(TaskID_t task_id) {
  return 0ULL;
}

}  // namespace firmament
