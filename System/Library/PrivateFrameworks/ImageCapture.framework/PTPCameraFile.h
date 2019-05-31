/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraFile.h>

@class NSString;

@interface PTPCameraFile : ICCameraFile {

	void* _ptpCameraFileProperties;
	NSString* _path;
	BOOL _updatedBasicMetadata;
	BOOL _updatedExpensiveMetadata;
	BOOL _previewThumbnail;
	BOOL _smallThumbnail;
	BOOL _rolledMetadata;
	int _thmSize;
	int _thmOffset;
	int _thmWidth;
	int _thmHeight;
	int _imgWidth;
	int _imgHeight;
	int _imgOrientation;
	int _bitsPerPixel;
	NSString* _exifCreationDateTime;
	NSString* _exifModificationDateTime;
	long long _dpOffset;

}

@property (copy) NSString * exifCreationDateTime;                  //@synthesize exifCreationDateTime=_exifCreationDateTime - In the implementation block
@property (copy) NSString * exifModificationDateTime;              //@synthesize exifModificationDateTime=_exifModificationDateTime - In the implementation block
@property (assign) int thmSize;                                    //@synthesize thmSize=_thmSize - In the implementation block
@property (assign) int thmOffset;                                  //@synthesize thmOffset=_thmOffset - In the implementation block
@property (assign) int thmWidth;                                   //@synthesize thmWidth=_thmWidth - In the implementation block
@property (assign) int thmHeight;                                  //@synthesize thmHeight=_thmHeight - In the implementation block
@property (assign) int imgWidth;                                   //@synthesize imgWidth=_imgWidth - In the implementation block
@property (assign) int imgHeight;                                  //@synthesize imgHeight=_imgHeight - In the implementation block
@property (assign) int imgOrientation;                             //@synthesize imgOrientation=_imgOrientation - In the implementation block
@property (assign) int bitsPerPixel;                               //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign) long long dpOffset;                             //@synthesize dpOffset=_dpOffset - In the implementation block
@property (assign) BOOL updatedBasicMetadata;                      //@synthesize updatedBasicMetadata=_updatedBasicMetadata - In the implementation block
@property (assign) BOOL updatedExpensiveMetadata;                  //@synthesize updatedExpensiveMetadata=_updatedExpensiveMetadata - In the implementation block
@property (assign) BOOL previewThumbnail;                          //@synthesize previewThumbnail=_previewThumbnail - In the implementation block
@property (assign) BOOL smallThumbnail;                            //@synthesize smallThumbnail=_smallThumbnail - In the implementation block
@property (assign) BOOL rolledMetadata;                            //@synthesize rolledMetadata=_rolledMetadata - In the implementation block
@property (readonly) unsigned long long type; 
@property (readonly) unsigned storageID; 
@property (readonly) unsigned objHandle; 
@property (copy) id info; 
@property (retain) NSString * path;                                //@synthesize path=_path - In the implementation block
-(void)setSizeAndOrientationFromImageProperties:(id)arg1 ;
-(unsigned)objHandle;
-(unsigned)storageID;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned)arg5 objectHandle:(unsigned)arg6 ;
-(void)attachKeywords;
-(void)updateBasicMetadata;
-(long long)dpOffset;
-(void)setDpOffset:(long long)arg1 ;
-(unsigned long long)readStream:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(BOOL)processMetadata:(id)arg1 ;
-(void)rawImageInspectMetadata;
-(CGImageRef)copyThumbnailForPixelWidth:(unsigned)arg1 ;
-(BOOL)rolledMetadata;
-(BOOL)smallThumbnail;
-(BOOL)previewThumbnail;
-(int)imgHeight;
-(int)imgWidth;
-(void)setImgHeight:(int)arg1 ;
-(void)setImgWidth:(int)arg1 ;
-(void)setImgOrientation:(int)arg1 ;
-(id)rawImageValidateSubImage:(id)arg1 error:(id*)arg2 ;
-(void)rawImageScrapeAllocatedData:(char*)arg1 length:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3 ;
-(void)setRolledMetadata:(BOOL)arg1 ;
-(void)setThmOffset:(int)arg1 ;
-(void)setThmSize:(int)arg1 ;
-(void)setSmallThumbnail:(BOOL)arg1 ;
-(void)setPreviewThumbnail:(BOOL)arg1 ;
-(BOOL)updatedBasicMetadata;
-(void)setUpdatedBasicMetadata:(BOOL)arg1 ;
-(int)thmSize;
-(BOOL)updatedExpensiveMetadata;
-(int)imgOrientation;
-(void)setExifCreationDateTime:(NSString *)arg1 ;
-(void)setExifModificationDateTime:(NSString *)arg1 ;
-(NSString *)exifModificationDateTime;
-(NSString *)exifCreationDateTime;
-(void)setUpdatedExpensiveMetadata:(BOOL)arg1 ;
-(long long)skipBytes:(long long)arg1 ;
-(void)releaseProvider;
-(int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3 ;
-(long long)compare:(id)arg1 against:(id)arg2 withContext:(void*)arg3 ;
-(id)thumbnailForPixelWidth:(unsigned)arg1 ;
-(id)altThumbnaillForPixelWidth:(unsigned)arg1 ;
-(int)thmOffset;
-(int)thmWidth;
-(void)setThmWidth:(int)arg1 ;
-(int)thmHeight;
-(void)setThmHeight:(int)arg1 ;
-(int)bitsPerPixel;
-(void)setBitsPerPixel:(int)arg1 ;
-(id)imageData;
-(void)rewind;
-(id)metadataDict;
-(void)dealloc;
-(unsigned long long)type;
-(NSString *)path;
-(id)info;
-(void)setPath:(NSString *)arg1 ;
-(void)setInfo:(id)arg1 ;
@end

