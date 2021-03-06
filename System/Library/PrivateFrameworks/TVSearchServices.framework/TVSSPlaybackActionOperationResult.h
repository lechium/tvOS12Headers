/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSearchServices/TVSearchServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface TVSSPlaybackActionOperationResult : NSObject <NSCopying, NSSecureCoding> {

	NSString* _appBundleID;
	NSURL* _playbackURL;

}

@property (nonatomic,copy,readonly) NSString * appBundleID;              //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * playbackURL;                 //@synthesize playbackURL=_playbackURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)appBundleID;
-(NSURL *)playbackURL;
-(id)initWithAppBundleID:(id)arg1 playbackURL:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

