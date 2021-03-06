#pragma once

// This file is generated by a script.  Do not edit!
// See drake/examples/Cars/lcm_vector_gen.py.

#include "drake/drakeCars_export.h"
#include "drake/examples/Cars/gen/driving_command.h"
#include "drake/systems/lcm/lcm_and_vector_base_translator.h"
#include "lcmtypes/drake/lcmt_driving_command_t.hpp"

namespace drake {
namespace cars {

/**
 * Translates between LCM message objects and VectorBase objects for the
 * DrivingCommand type.
 */
class DRAKECARS_EXPORT DrivingCommandTranslator
    : public systems::lcm::LcmAndVectorBaseTranslator {
 public:
  DrivingCommandTranslator()
      : LcmAndVectorBaseTranslator(DrivingCommandIndices::kNumCoordinates) {}
  std::unique_ptr<systems::BasicVector<double>> AllocateOutputVector()
      const override;
  void TranslateLcmToVectorBase(
      const void* lcm_message_bytes, int lcm_message_length,
      systems::VectorBase<double>* vector_base) const override;
  void TranslateVectorBaseToLcm(
      const systems::VectorBase<double>& vector_base,
      std::vector<uint8_t>* lcm_message_bytes) const override;
};

}  // namespace cars
}  // namespace drake
