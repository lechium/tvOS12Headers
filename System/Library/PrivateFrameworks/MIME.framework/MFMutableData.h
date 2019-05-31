/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSMutableData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {

	void* _bytes;
	unsigned long long _length;
	unsigned long long _mappedLength;
	unsigned long long _capacity;
	unsigned long long _threshold;
	char* _path;
	int _fd;
	unsigned long long _flushFrom;
	BOOL _flush;
	BOOL _immutable;
	BOOL _vm;

}
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)mf_immutable;
-(void)_mapMutableData:(BOOL)arg1 ;
-(void)_flushToDisk:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(id)_initWithFd:(int)arg1 path:(id)arg2 mutable:(BOOL)arg3 ;
-(void)setMappingThreshold:(unsigned)arg1 ;
-(void)mf_makeImmutable;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)bytes;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void*)mutableBytes;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)appendData:(id)arg1 ;
@end

