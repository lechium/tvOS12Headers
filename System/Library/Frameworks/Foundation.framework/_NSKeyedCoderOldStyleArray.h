/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSKeyedCoderOldStyleArray : NSObject {

	void* _addr;
	unsigned long long _count;
	unsigned long long _size;
	char _type;
	BOOL _decoded;
	char _padding[2];

}
-(id)initWithObjCType:(char)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)fillObjCType:(char)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

