/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACCAuthContext.h>

@class NSString;

@interface ACMAuthContext : ACCAuthContext {

	NSString* _userPreferences;

}

@property (retain) NSString * userPreferences;              //@synthesize userPreferences=_userPreferences - In the implementation block
-(void)setUserPreferences:(NSString *)arg1 ;
-(NSString *)userPreferences;
-(id)parametersDictionary;
-(BOOL)isDevicePwnd;
-(void)dealloc;
@end
