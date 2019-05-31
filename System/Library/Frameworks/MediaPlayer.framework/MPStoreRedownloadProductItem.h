/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSArray, MPStoreRedownloadProductItemAsset, NSString;

@interface MPStoreRedownloadProductItem : NSObject {

	NSDictionary* _responseDictionary;
	BOOL _usesCurrentAccountIfAvailable;
	NSURL* _fallbackStreamingKeyServerURL;
	NSURL* _fallbackStreamingKeyCertificateURL;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy) NSURL * fallbackStreamingKeyServerURL;                              //@synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * fallbackStreamingKeyCertificateURL;                         //@synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL - In the implementation block
@property (assign,nonatomic) BOOL usesCurrentAccountIfAvailable;                               //@synthesize usesCurrentAccountIfAvailable=_usesCurrentAccountIfAvailable - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allFlavors; 
@property (nonatomic,readonly) MPStoreRedownloadProductItemAsset * asset; 
@property (nonatomic,readonly) MPStoreRedownloadProductItemAsset * firstAsset; 
@property (getter=isiTunesStoreStream,nonatomic,readonly) BOOL iTunesStoreStream; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,readonly) NSURL * HLSPlaylistURL; 
@property (nonatomic,readonly) NSURL * HLSKeyCertificateURL; 
@property (nonatomic,readonly) NSURL * HLSKeyServerURL; 
@property (nonatomic,readonly) NSURL * alternateHLSPlaylistURL; 
@property (nonatomic,readonly) NSURL * alternateHLSKeyServerURL; 
@property (nonatomic,readonly) NSURL * alternateHLSKeyCertificateURL; 
-(NSString *)fileExtension;
-(NSDictionary *)responseDictionary;
-(id)_initWithResponseDictionary:(id)arg1 ;
-(NSURL *)fallbackStreamingKeyCertificateURL;
-(void)setFallbackStreamingKeyCertificateURL:(NSURL *)arg1 ;
-(NSURL *)fallbackStreamingKeyServerURL;
-(void)setFallbackStreamingKeyServerURL:(NSURL *)arg1 ;
-(void)_enumerateAssetDictionariesWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)allFlavors;
-(MPStoreRedownloadProductItemAsset *)firstAsset;
-(NSURL *)HLSKeyCertificateURL;
-(NSURL *)HLSKeyServerURL;
-(NSURL *)HLSPlaylistURL;
-(BOOL)isiTunesStoreStream;
-(NSURL *)alternateHLSPlaylistURL;
-(NSURL *)alternateHLSKeyServerURL;
-(NSURL *)alternateHLSKeyCertificateURL;
-(id)assetForFlavor:(id)arg1 ;
-(BOOL)usesCurrentAccountIfAvailable;
-(void)setUsesCurrentAccountIfAvailable:(BOOL)arg1 ;
-(MPStoreRedownloadProductItemAsset *)asset;
@end

