/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXPreferences;

@interface _CFXPreferencesHandle : NSObject {

	_CFXPreferences* prefs;
	os_unfair_lock_s lock;
	unsigned overrideEUID;

}
-(void)setEUIDOverride:(unsigned)arg1 ;
-(id)copyPrefs;
-(id)init;
-(void)dealloc;
@end

