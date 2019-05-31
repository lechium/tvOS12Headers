/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTimeAndDistanceUpdaterDelegate <NSObject>
@required
-(void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
-(void)timeAndDistanceUpdater:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)timeAndDistanceUpdater:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;

@end

