/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding> {

	NSString* _assetUUID;
	NSString* _momentUUID;

}

@property (nonatomic,readonly) NSString * assetUUID;               //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) NSString * momentUUID;              //@synthesize momentUUID=_momentUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)assetUUID;
-(id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2 ;
-(NSString *)momentUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

