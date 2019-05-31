/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFFile.h>
#import <libobjc.A.dylib/PFIStream.h>
#import <libobjc.A.dylib/PFStream.h>

@class NSError, NSString;

@interface PFFileIStream : PFFile <PFIStream, PFStream> {

	_sFILE* _file;
	char* _buffer;
	unsigned long long _bufferLength;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFile:(id)arg1 ;
-(void)closeStream;
-(BOOL)openStream;
-(BOOL)createDirectoryIfNecessary;
-(void)updateError;
-(BOOL)readStream:(char*)arg1 length:(unsigned long long)arg2 read:(unsigned long long*)arg3 ;
-(long long)streamLength;
-(long long)streamPosition;
-(BOOL)rewindStream;
-(BOOL)rewindStream:(long long)arg1 ;
-(BOOL)advanceStream;
-(BOOL)advanceStream:(long long)arg1 distanceMoved:(long long*)arg2 ;
-(id)getStreamError;
-(unsigned long long)preferredStreamBlockSize;
-(const char*)streamData:(unsigned long long*)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)lock;
-(void)unlock;
-(void)setError:(id)arg1 ;
@end

