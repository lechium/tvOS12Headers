/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INIntentResponseObserver.h>

@protocol _MXIntentResponseObserver;
@class NSString;

@interface _MXIntentResponseObserverProxy : NSObject <INIntentResponseObserver> {

	id<_MXIntentResponseObserver> _observer;

}

@property (assign,nonatomic,__weak) id<_MXIntentResponseObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)intentResponseDidUpdate:(id)arg1 ;
-(void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2 ;
-(id)initWithObserver:(id)arg1 ;
-(void)didReceiveError:(id)arg1 ;
-(void)stopObserving;
-(void)setObserver:(id<_MXIntentResponseObserver>)arg1 ;
-(id<_MXIntentResponseObserver>)observer;
@end
