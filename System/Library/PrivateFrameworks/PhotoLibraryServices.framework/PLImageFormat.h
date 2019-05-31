/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString;

@interface PLImageFormat : NSObject {

	BOOL _isCropped;
	BOOL _isAlwaysFullScreen;
	int _formatID;
	NSString* _name;
	double _dimension;
	long long _formatMode;
	long long _version;
	const SCD_Struct_PL18* _bakedFormatInfo;
	long long _thumbnailKind;
	CGSize _size;

}

@property (assign,nonatomic) int formatID;                                          //@synthesize formatID=_formatID - In the implementation block
@property (assign,nonatomic) long long thumbnailKind;                               //@synthesize thumbnailKind=_thumbnailKind - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isCropped;                                      //@synthesize isCropped=_isCropped - In the implementation block
@property (nonatomic,readonly) double dimension;                                    //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) long long formatMode;                                //@synthesize formatMode=_formatMode - In the implementation block
@property (nonatomic,readonly) BOOL isSquare; 
@property (nonatomic,readonly) BOOL dimensionsReferToShortSide; 
@property (nonatomic,readonly) BOOL isTable; 
@property (nonatomic,readonly) BOOL isThumbnail; 
@property (nonatomic,readonly) BOOL isAlwaysFullScreen;                             //@synthesize isAlwaysFullScreen=_isAlwaysFullScreen - In the implementation block
@property (nonatomic,readonly) long long version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL refersToLatestVersion; 
@property (nonatomic,readonly) BOOL refersToUnadjustedVersion; 
@property (nonatomic,readonly) BOOL refersToPenultimateVersion; 
@property (nonatomic,readonly) BOOL refersToOriginalVersion; 
@property (nonatomic,readonly) const SCD_Struct_PL18* bakedFormatInfo;              //@synthesize bakedFormatInfo=_bakedFormatInfo - In the implementation block
@property (nonatomic,readonly) BOOL bakedFormatIsDynamicallySized; 
+(id)formatWithID:(int)arg1 ;
+(id)_syncFormats;
-(CGSize)scaledSizeForSourceSize:(CGSize)arg1 ;
-(int)formatID;
-(BOOL)isCropped;
-(id)thumbnailSpecification;
-(BOOL)isTable;
-(BOOL)isSquare;
-(long long)formatMode;
-(BOOL)isThumbnail;
-(unsigned long long)fullSizeMinShortSide;
-(unsigned long long)fullSizeDesiredLongSide;
-(unsigned long long)fullSizeMaxLongSide;
-(CGSize)scaledSizeForSourceSize:(CGSize)arg1 capLength:(BOOL)arg2 ;
-(BOOL)isAlwaysFullScreen;
-(BOOL)refersToOriginalVersion;
-(BOOL)refersToPenultimateVersion;
-(BOOL)refersToUnadjustedVersion;
-(BOOL)isEqualToFormat:(id)arg1 ;
-(BOOL)_isAcceptableForViewSize:(CGSize)arg1 contentMode:(long long)arg2 sourceAspectRatio:(double)arg3 desiredImageSize:(CGSize)arg4 demoteFactor:(double)arg5 ;
-(BOOL)_canDegradeToFormat:(id)arg1 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 ;
-(void)setFormatID:(int)arg1 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 version:(long long)arg4 isAlwaysFullScreen:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 version:(long long)arg4 isAlwaysFullScreen:(BOOL)arg5 formatMode:(long long)arg6 thumbnailKind:(long long)arg7 ;
-(long long)thumbnailKind;
-(id)initWithFormatID:(int)arg1 ;
-(CGSize)_shortSideFormatScaledSizeForSourceSize:(CGSize)arg1 capLength:(BOOL)arg2 ;
-(BOOL)dimensionsReferToShortSide;
-(BOOL)refersToLatestVersion;
-(BOOL)bakedFormatIsDynamicallySized;
-(CGSize)sizeOfThumbnailWithAspectRatio:(double)arg1 ;
-(const SCD_Struct_PL18*)bakedFormatInfo;
-(void)setThumbnailKind:(long long)arg1 ;
-(CGSize)size;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(long long)version;
-(long long)compare:(id)arg1 ;
-(double)dimension;
-(id)shortDescription;
@end

