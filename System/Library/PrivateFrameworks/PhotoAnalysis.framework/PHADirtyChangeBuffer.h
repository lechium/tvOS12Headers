/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PHADirtyChangeBuffer : NSObject {

	NSMutableDictionary* _workInfosByWorkerType;

}

@property (nonatomic,retain) NSMutableDictionary * workInfosByWorkerType;              //@synthesize workInfosByWorkerType=_workInfosByWorkerType - In the implementation block
-(NSMutableDictionary *)workInfosByWorkerType;
-(void)setWorkInfosByWorkerType:(NSMutableDictionary *)arg1 ;
-(void)recordChangeForAssetIdentifier:(id)arg1 workerType:(int)arg2 workerFlags:(int)arg3 ;
-(id)init;
-(id)snapshot;
@end

