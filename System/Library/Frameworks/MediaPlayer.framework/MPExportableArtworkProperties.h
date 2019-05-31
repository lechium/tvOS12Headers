/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSString, NSArray, ICStoreArtworkInfo;

@interface MPExportableArtworkProperties : NSObject {

	NSString* _resolvedURLString;
	NSArray* _artworkTemplateItems;
	unsigned long long _mediaType;
	long long _mediaLibraryArtworkType;

}

@property (nonatomic,readonly) ICStoreArtworkInfo * artworkInfo; 
@property (nonatomic,copy) NSString * resolvedURLString;                      //@synthesize resolvedURLString=_resolvedURLString - In the implementation block
@property (nonatomic,copy) NSArray * artworkTemplateItems;                    //@synthesize artworkTemplateItems=_artworkTemplateItems - In the implementation block
@property (assign,nonatomic) unsigned long long mediaType;                    //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long mediaLibraryArtworkType;               //@synthesize mediaLibraryArtworkType=_mediaLibraryArtworkType - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)setMediaType:(unsigned long long)arg1 ;
-(NSString *)resolvedURLString;
-(NSArray *)artworkTemplateItems;
-(void)setArtworkTemplateItems:(NSArray *)arg1 ;
-(void)setResolvedURLString:(NSString *)arg1 ;
-(long long)mediaLibraryArtworkType;
-(void)setMediaLibraryArtworkType:(long long)arg1 ;
-(ICStoreArtworkInfo *)artworkInfo;
-(unsigned long long)mediaType;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
@end

