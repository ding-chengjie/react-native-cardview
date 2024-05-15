#ifndef HARMONY_CARDVIEW_SRC_MAIN_CPP_CARDVIEWJSIBINDER_H
#define HARMONY_CARDVIEW_SRC_MAIN_CPP_CARDVIEWJSIBINDER_H
#include "RNOHCorePackage/ComponentBinders/ViewComponentJSIBinder.h"
#include "ShadowNodes.h"
#include "glog/logging.h"
namespace rnoh {
class CardViewJSIBinder : public ViewComponentJSIBinder {
    facebook::jsi::Object createNativeProps(facebook::jsi::Runtime &rt) override {
        LOG(INFO) << "CardViewJSIBinder  RNCardView";
        auto object = ViewComponentJSIBinder::createNativeProps(rt);


        object.setProperty(rt, "backgroundColor", "number");
        object.setProperty(rt, "cornerRadius", "float");
        object.setProperty(rt, "cardElevation", "float");
        object.setProperty(rt, "cardMaxElevation", "float");
        object.setProperty(rt, "useCompatPadding", "bool");
        object.setProperty(rt, "cornerOverlap", "bool");
        LOG(INFO) << "[wj] <CardViewComponentInstance::onPropsChanged> Successfully cast props, object: ";
        return object;
    }
    //         facebook::jsi::Object createDirectEventTypes(facebook::jsi::Runtime &rt) override {
    //             facebook::jsi::Object events(rt);
    //             events.setProperty(rt, "", createDirectEvent(rt, ""));
    //             return events;
    //         }
};
} // namespace  rnoh
#endif