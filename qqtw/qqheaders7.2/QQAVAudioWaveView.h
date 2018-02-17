//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, UIColor;

@interface QQAVAudioWaveView : UIView
{
    CADisplayLink *_meterUpdateDisplayLink;
    int _waveAnamationState;
    float _amplitudeState;
    float _c;
    double _frequency;
    UIColor *_waveColor;
    double _phase;
    double _amplitude;
    long long _numberOfWaves;
    double _primaryWaveLineWidth;
    double _secondaryWaveLineWidth;
    double _idleAmplitude;
    double _density;
    double _phaseShift;
}

@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
- (void)awakeFromNib;
- (void)dealloc;
@property(nonatomic) double density; // @synthesize density=_density;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) double idleAmplitude; // @synthesize idleAmplitude=_idleAmplitude;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long numberOfWaves; // @synthesize numberOfWaves=_numberOfWaves;
@property(nonatomic) double phase; // @synthesize phase=_phase;
@property(nonatomic) double phaseShift; // @synthesize phaseShift=_phaseShift;
@property(nonatomic) double primaryWaveLineWidth; // @synthesize primaryWaveLineWidth=_primaryWaveLineWidth;
@property(nonatomic) double secondaryWaveLineWidth; // @synthesize secondaryWaveLineWidth=_secondaryWaveLineWidth;
- (void)setHidden:(_Bool)arg1;
@property(retain, nonatomic) UIColor *waveColor; // @synthesize waveColor=_waveColor;
- (void)setup;
- (void)startDefaultWaveWithAnimation:(_Bool)arg1;
- (void)startRealWave;
- (void)startUpdatingMeter;
- (void)stopDefaultWaveWithAnimation:(_Bool)arg1;
- (void)stopRealWave;
- (void)stopUpdatingMeter;
- (void)updateMeters;
- (void)updateWithLevel:(double)arg1;

@end

