/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NAObserverProxy : NSObject {

	BOOL _valid;
	id _weakObserver;

}

@property (nonatomic,__weak,readonly) id weakObserver;                 //@synthesize weakObserver=_weakObserver - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(id)initWithWeakObserver:(id)arg1 ;
-(id)weakObserver;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
@end
