/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface TKDataSource : NSObject {

	NSData* _data;
	const char* _ptr;

}

@property (readonly) const char* ptr;              //@synthesize ptr=_ptr - In the implementation block
@property (readonly) const char* end; 
@property (readonly) NSData * data; 
-(BOOL)bytesSafeToRead:(long long)arg1 ;
-(unsigned char)fetchByte;
-(id)fetchDataWithLength:(long long)arg1 ;
-(const char*)ptr;
-(NSData *)data;
-(const char*)end;
-(id)initWithData:(id)arg1 ;
@end

