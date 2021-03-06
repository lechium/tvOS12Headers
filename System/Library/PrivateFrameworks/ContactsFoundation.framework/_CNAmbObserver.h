/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver, _CNAmbObserverDelegate;
@class NSString;

@interface _CNAmbObserver : NSObject <CNObserver> {

	id<CNObserver> _observer;
	id<_CNAmbObserverDelegate> _delegate;
	BOOL _isWinner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
-(void)declareWinner;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
@end

