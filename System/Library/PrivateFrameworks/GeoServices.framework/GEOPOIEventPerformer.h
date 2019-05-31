/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface GEOPOIEventPerformer : NSObject <NSSecureCoding> {

	NSString* _localizedName;
	NSString* _iTunesIdentifier;
	NSURL* _iTunesURL;

}

@property (nonatomic,retain) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * iTunesIdentifier;              //@synthesize iTunesIdentifier=_iTunesIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * iTunesURL;                        //@synthesize iTunesURL=_iTunesURL - In the implementation block
+(id)poiEventPerformersForPerformers:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)initWithPerformer:(id)arg1 ;
-(NSString *)iTunesIdentifier;
-(void)setITunesIdentifier:(NSString *)arg1 ;
-(NSURL *)iTunesURL;
-(void)setITunesURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
@end

