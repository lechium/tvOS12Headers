/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNReaderWriterScheduler.h>

@protocol CNReaderWriterScheduler <NSObject>
@required
-(id)performReaderBlock:(/*^block*/id)arg1;
-(id)performWriterBlock:(/*^block*/id)arg1;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1;
-(void)resume;
-(void)suspend;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _suspended;
	NSMutableArray* _activeReaders;
	NSMutableArray* _pendingReaders;
	NSMutableArray* _activeWriters;
	NSMutableArray* _pendingWriters;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@property (nonatomic,readonly) NSMutableArray * activeReaders;                  //@synthesize activeReaders=_activeReaders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingReaders;                 //@synthesize pendingReaders=_pendingReaders - In the implementation block
@property (nonatomic,readonly) NSMutableArray * activeWriters;                  //@synthesize activeWriters=_activeWriters - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingWriters;                 //@synthesize pendingWriters=_pendingWriters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appendDescriptionToBuilder:(id)arg1 ;
-(void)addReaderWithIdentifier:(id)arg1 ;
-(void)activateReader:(id)arg1 ;
-(void)removeReader:(id)arg1 ;
-(NSMutableArray *)activeWriters;
-(NSMutableArray *)pendingWriters;
-(NSMutableArray *)activeReaders;
-(NSMutableArray *)pendingReaders;
-(id)performReaderBlock:(/*^block*/id)arg1 ;
-(id)performWriterBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1 ;
-(void)addWriterWithIdentifier:(id)arg1 ;
-(void)activateWriter:(id)arg1 ;
-(void)removeWriter:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)resume;
-(BOOL)isSuspended;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)suspend;
-(void)setSuspended:(BOOL)arg1 ;
@end
