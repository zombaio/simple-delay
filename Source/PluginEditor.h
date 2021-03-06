/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class BasicDelayAudioProcessorEditor  : public AudioProcessorEditor,
                                        public SliderListener,
                                        public Timer
{
public:
    BasicDelayAudioProcessorEditor (BasicDelayAudioProcessor&);
    ~BasicDelayAudioProcessorEditor();

    //==============================================================================
    void timerCallback();
    void paint (Graphics&) override;
    void resized() override;
    void sliderValueChanged (Slider*);

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BasicDelayAudioProcessor& processor;
    Label delayLengthLabel, feedbackLabel, dryMixLabel, wetMixLabel;
    Slider delayLengthSlider, feedbackSlider, dryMixSlider, wetMixSlider;
    
    ScopedPointer<ResizableCornerComponent> resizer;
    ComponentBoundsConstrainer resizeLimits;
    
    BasicDelayAudioProcessor* getProcessor() const
    {
        return static_cast <BasicDelayAudioProcessor*> (getAudioProcessor());
    }

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BasicDelayAudioProcessorEditor)
};


#endif  // PLUGINEDITOR_H_INCLUDED
