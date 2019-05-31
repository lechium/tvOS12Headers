/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CoreThemeDocument, NSMutableArray, NSConditionLock, TDLogger;

@interface TDRenditionsDistiller : NSObject {

	CoreThemeDocument* document;
	NSMutableArray* renditionInQueue;
	NSMutableArray* psiDataInfoOutQueue;
	NSConditionLock* inQueueLock;
	NSConditionLock* outQueueLock;
	BOOL shouldCompressCSIDataFlag;
	BOOL noMoreCSIDataInfo;
	BOOL noMoreRenditions;
	TDLogger* _logger;

}

@property (retain) TDLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(BOOL)arg2 ;
-(void)detachDistillationThread;
-(void)enqueueAbortFlag;
-(void)enqueueRenditionSpec:(id)arg1 ;
-(void)enqueueLastRenditionFlag;
-(id)nextCSIDataInfoFromQueue;
-(void)_distill:(id)arg1 ;
-(void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3 ;
-(void)_enqueueOnOutQueueTheObject:(id)arg1 ;
-(id)_nextObjectFromInQueue;
-(void)_enqueueDistillingAbortedInfo;
-(void)_enqueueCSIDataInfo:(id)arg1 ;
-(void)_enqueueLastCSIDataInfoFlag;
-(void)_enqueueOnInQueueTheObject:(id)arg1 ;
-(TDLogger *)logger;
-(void)setLogger:(TDLogger *)arg1 ;
-(void)dealloc;
@end

