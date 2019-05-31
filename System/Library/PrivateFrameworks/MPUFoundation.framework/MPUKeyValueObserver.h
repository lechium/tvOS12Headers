/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOperationQueue;

@interface MPUKeyValueObserver : NSObject {

	id _observedObject;
	NSString* _observedKeyPath;
	/*^block*/id _observationHandler;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) id observedObject;                     //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy) NSString * observedKeyPath;              //@synthesize observedKeyPath=_observedKeyPath - In the implementation block
@property (nonatomic,copy) id observationHandler;                   //@synthesize observationHandler=_observationHandler - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
+(id)observerForKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)setObservedObject:(id)arg1 ;
-(id)initWithKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(id)observationHandler;
-(NSString *)observedKeyPath;
-(void)setObservedKeyPath:(NSString *)arg1 ;
-(void)setObservationHandler:(id)arg1 ;
-(id)observedObject;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)queue;
@end
