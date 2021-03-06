/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNScheduler;
@interface _CNScheduledObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNScheduler> _scheduler;

}

@property (nonatomic,retain) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) id<CNScheduler> scheduler;                //@synthesize scheduler=_scheduler - In the implementation block
-(id)initWithObservable:(id)arg1 scheduler:(id)arg2 ;
-(void)setObservable:(id<CNObservable>)arg1 ;
-(id)subscribe:(id)arg1 ;
-(void)setScheduler:(id<CNScheduler>)arg1 ;
-(id<CNScheduler>)scheduler;
-(id<CNObservable>)observable;
@end

