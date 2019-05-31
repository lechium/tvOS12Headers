/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNSchedulerProvider;
@class CNObservable;

@interface _CNFlatMapObservable : CNObservable {

	CNObservable* _observable;
	/*^block*/id _decoratorGenerator;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) CNObservable * observable;                              //@synthesize observable=_observable - In the implementation block
@property (nonatomic,copy,readonly) id decoratorGenerator;                             //@synthesize decoratorGenerator=_decoratorGenerator - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
+(id)concatMapWithObservable:(id)arg1 transform:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)flatMapWithObservable:(id)arg1 transform:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
+(id)observableWithObservable:(id)arg1 transform:(/*^block*/id)arg2 decoratorGenerator:(/*^block*/id)arg3 schedulerProvider:(id)arg4 ;
-(id)initWithObservable:(id)arg1 transform:(/*^block*/id)arg2 decoratorGenerator:(/*^block*/id)arg3 schedulerProvider:(id)arg4 ;
-(id)subscribeInnerObservable:(id)arg1 observer:(id)arg2 context:(id)arg3 ;
-(id)decoratorGenerator;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)subscribe:(id)arg1 ;
-(CNObservable *)observable;
@end

