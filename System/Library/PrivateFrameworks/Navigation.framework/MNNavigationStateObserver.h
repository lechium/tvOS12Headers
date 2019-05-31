/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationStateObserver <NSObject>
@optional
-(void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
-(void)stateManager:(id)arg1 didUpdateIsInVehicle:(BOOL)arg2;
-(void)stateManager:(id)arg1 didUpdatePossibleDestinations:(id)arg2;
-(void)stateManagerPredictingDidArrive:(id)arg1;

@end

