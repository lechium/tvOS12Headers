/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationObjectRegistration : _CFXNotificationRegistrationContainer {

	void* _object;

}

@property (readonly) void* object;              //@synthesize object=_object - In the implementation block
+(Class)childClass;
+(const SCD_Struct_CF2*)stringKeyCallbacks;
-(id)initWithObject:(void*)arg1 parent:(id)arg2 ;
-(id)acquireObserver:(void*)arg1 options:(unsigned long long)arg2 ;
-(void)find:(void*)arg1 matching:(SCD_Struct_CF10*)arg2 ;
-(void)match:(void*)arg1 matching:(SCD_Struct_CF10*)arg2 ;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(void*)object;
-(void*)key;
@end

