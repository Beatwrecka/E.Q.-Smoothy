/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class E_Q_SmoothyAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    E_Q_SmoothyAudioProcessorEditor (E_Q_SmoothyAudioProcessor&);
    ~E_Q_SmoothyAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    E_Q_SmoothyAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (E_Q_SmoothyAudioProcessorEditor)
};
