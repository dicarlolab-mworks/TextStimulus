//
//  TextStimulusPlugin.cpp
//  TextStimulus
//
//  Created by Christopher Stawarz on 9/12/16.
//  Copyright © 2016 The MWorks Project. All rights reserved.
//


BEGIN_NAMESPACE_MW


class TextStimulusPlugin : public Plugin {
    void registerComponents(boost::shared_ptr<ComponentRegistry> registry) override {
        //registry->registerFactory<StandardComponentFactory, TextStimulus>();
    }
};


extern "C" Plugin* getPlugin() {
    return new TextStimulusPlugin();
}


END_NAMESPACE_MW
