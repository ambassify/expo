/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <folly/dynamic.h>
#include <ABI45_0_0React/ABI45_0_0renderer/components/rncore/Props.h>
#include <ABI45_0_0React/ABI45_0_0renderer/core/propsConversions.h>

namespace ABI45_0_0facebook {
namespace ABI45_0_0React {

#ifdef ANDROID
inline folly::dynamic toDynamic(AndroidProgressBarProps const &props) {
  folly::dynamic serializedProps = folly::dynamic::object();
  serializedProps["styleAttr"] = props.styleAttr;
  serializedProps["typeAttr"] = props.typeAttr;
  serializedProps["indeterminate"] = props.indeterminate;
  serializedProps["progress"] = props.progress;
  serializedProps["animating"] = props.animating;
  serializedProps["color"] = toDynamic(props.color);
  serializedProps["testID"] = props.testID;
  return serializedProps;
}
#endif

} // namespace ABI45_0_0React
} // namespace ABI45_0_0facebook
