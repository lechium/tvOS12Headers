/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface ATVAutounbinder : NSObject {

	NSMapTable* _bindingsByObject;
	BOOL _assertOnRetainEnabled;

}
-(void)_assertIllegalRetain;
-(void)addBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)removeBinding:(id)arg1 fromObject:(id)arg2 ;
-(void)_notifyBindingAdaptors;
-(void)_enableAssertOnRetain;
-(id)init;
-(void)dealloc;
-(id)retain;
@end

