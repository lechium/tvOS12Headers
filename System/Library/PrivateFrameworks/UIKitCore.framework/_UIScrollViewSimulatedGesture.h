/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIScrollViewSimulatedGesture : NSObject {

	double _simulationDuration;
	double _beginTime;
	/*^block*/id _beginBlock;
	/*^block*/id _updateBlock;
	/*^block*/id _endBlock;

}
-(id)initWithDuration:(double)arg1 begin:(/*^block*/id)arg2 update:(/*^block*/id)arg3 end:(/*^block*/id)arg4 ;
-(BOOL)updateSimulation;
@end

