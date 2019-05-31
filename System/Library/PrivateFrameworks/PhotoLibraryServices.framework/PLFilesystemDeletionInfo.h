/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface PLFilesystemDeletionInfo : NSObject {

	NSString* _directory;
	NSString* _filename;
	NSURL* _objectIDURI;
	NSArray* _fileURLs;
	unsigned long long _thumbnailIndex;
	NSString* _thumbnailIdentifier;
	NSString* _uuid;
	unsigned long long _timestamp;

}

@property (retain) NSArray * fileURLs;                               //@synthesize fileURLs=_fileURLs - In the implementation block
@property (retain) NSString * thumbnailIdentifier;                   //@synthesize thumbnailIdentifier=_thumbnailIdentifier - In the implementation block
@property (retain,readonly) NSURL * objectIDURI;                     //@synthesize objectIDURI=_objectIDURI - In the implementation block
@property (readonly) unsigned long long thumbnailIndex;              //@synthesize thumbnailIndex=_thumbnailIndex - In the implementation block
@property (retain,readonly) NSString * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (retain,readonly) NSString * directory;                    //@synthesize directory=_directory - In the implementation block
@property (retain,readonly) NSString * filename;                     //@synthesize filename=_filename - In the implementation block
+(id)deletionInfoWithAsset:(id)arg1 ;
-(NSString *)filename;
-(NSString *)directory;
-(NSString *)thumbnailIdentifier;
-(id)initWithObjectIDURI:(id)arg1 directory:(id)arg2 filename:(id)arg3 fileURLs:(id)arg4 thumbnailIndex:(unsigned long long)arg5 thumbnailIdentifier:(id)arg6 uuid:(id)arg7 timestamp:(unsigned long long)arg8 ;
-(NSURL *)objectIDURI;
-(NSArray *)fileURLs;
-(void)setFileURLs:(NSArray *)arg1 ;
-(void)setThumbnailIdentifier:(NSString *)arg1 ;
-(unsigned long long)thumbnailIndex;
-(void)dealloc;
-(id)description;
-(NSString *)uuid;
-(unsigned long long)timestamp;
@end

