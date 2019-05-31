/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSCellularUsage.h>

@class NSString;

@interface PSAppCellularUsage : PSCellularUsage {

	NSString* _bundleID;
	NSString* _displayName;

}

@property (nonatomic,retain) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
-(NSString *)displayName;
@end

