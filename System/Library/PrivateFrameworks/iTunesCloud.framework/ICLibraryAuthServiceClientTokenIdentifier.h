/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <NSCopying> {

	NSNumber* _DSID;
	NSString* _deviceGUID;

}

@property (nonatomic,copy,readonly) NSNumber * DSID;                    //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceGUID;              //@synthesize deviceGUID=_deviceGUID - In the implementation block
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)deviceGUID;
-(NSNumber *)DSID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

