/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSURL;

@interface _PFEvanescentData : NSData {

	unsigned long long _length;
	NSURL* _fileURL;
	int _openfd;
	const void* _activeMap;
	int _mapRefCount;

}

@property (copy,readonly) NSURL * url; 
@property (readonly) const void* mapping; 
-(void)getBytes:(void*)arg1 ;
-(void)_destroyMapping;
-(const void*)_openMapping;
-(void)_closeMapping;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(const void*)mapping;
-(unsigned long long)length;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)bytes;
-(void)invalidate;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
@end

