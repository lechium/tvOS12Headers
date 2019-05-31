/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@class NSMutableArray;

@interface PHRecyclableObjectVendor : NSObject {

	NSMutableArray* _recycledObjects;
	Class _targetClass;
	os_unfair_lock_s _lock;
	BOOL _conformsToProtocol;
	BOOL _threadSafe;

}
-(id)initWithTargetClass:(Class)arg1 requiresThreadSafety:(BOOL)arg2 initialPoolSize:(long long)arg3 ;
-(void)recycleObject:(id)arg1 ;
-(id)dequeueRecyclableObject;
@end
