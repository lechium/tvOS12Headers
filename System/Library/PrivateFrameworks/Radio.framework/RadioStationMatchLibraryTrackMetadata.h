/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSString, NSNumber;

@interface RadioStationMatchLibraryTrackMetadata : RadioStationMatchMetadata {

	NSString* _albumArtistName;
	NSString* _albumName;
	NSString* _artistName;
	NSString* _composerName;
	NSString* _copyright;
	NSNumber* _discCount;
	NSNumber* _discNumber;
	NSNumber* _fileSize;
	NSString* _genreName;
	NSNumber* _compilation;
	NSNumber* _duration;
	NSString* _kind;
	NSString* _name;
	NSNumber* _storeAdamID;
	NSNumber* _storeCloudID;
	NSNumber* _trackCount;
	NSNumber* _trackNumber;
	NSNumber* _year;

}

@property (nonatomic,copy) NSString * albumArtistName;                               //@synthesize albumArtistName=_albumArtistName - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                     //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                    //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * composerName;                                  //@synthesize composerName=_composerName - In the implementation block
@property (nonatomic,copy) NSString * copyright;                                     //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,copy) NSNumber * discCount;                                     //@synthesize discCount=_discCount - In the implementation block
@property (nonatomic,copy) NSNumber * discNumber;                                    //@synthesize discNumber=_discNumber - In the implementation block
@property (nonatomic,copy) NSNumber * fileSize;                                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) NSString * genreName;                                     //@synthesize genreName=_genreName - In the implementation block
@property (getter=isCompilation,nonatomic,copy) NSNumber * compilation;              //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * kind;                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * storeAdamID;                                   //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,copy) NSNumber * storeCloudID;                                  //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (nonatomic,copy) NSNumber * trackCount;                                    //@synthesize trackCount=_trackCount - In the implementation block
@property (nonatomic,copy) NSNumber * trackNumber;                                   //@synthesize trackNumber=_trackNumber - In the implementation block
@property (nonatomic,copy) NSNumber * year;                                          //@synthesize year=_year - In the implementation block
+(id)metadataKey;
-(void)setKind:(NSString *)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)copyright;
-(void)setCopyright:(NSString *)arg1 ;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)albumName;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(void)setComposerName:(NSString *)arg1 ;
-(void)setGenreName:(NSString *)arg1 ;
-(NSNumber *)discNumber;
-(void)setDiscNumber:(NSNumber *)arg1 ;
-(NSNumber *)discCount;
-(void)setTrackNumber:(NSNumber *)arg1 ;
-(NSString *)artistName;
-(NSString *)composerName;
-(id)isCompilation;
-(NSNumber *)trackCount;
-(NSNumber *)trackNumber;
-(NSNumber *)storeAdamID;
-(NSNumber *)storeCloudID;
-(NSString *)albumArtistName;
-(void)setStoreAdamID:(NSNumber *)arg1 ;
-(void)setTrackCount:(NSNumber *)arg1 ;
-(void)setDiscCount:(NSNumber *)arg1 ;
-(void)setCompilation:(NSNumber *)arg1 ;
-(void)setStoreCloudID:(NSNumber *)arg1 ;
-(NSString *)genreName;
-(id)copyMetadataDictionary;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSNumber *)duration;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSNumber *)fileSize;
-(NSNumber *)year;
-(void)setYear:(NSNumber *)arg1 ;
-(NSString *)kind;
@end

