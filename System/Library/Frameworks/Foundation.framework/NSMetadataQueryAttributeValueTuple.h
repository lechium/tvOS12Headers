/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject {

	id _attr;
	id _value;
	unsigned long long _count;
	void* _reserved;

}

@property (copy,readonly) NSString * attribute; 
@property (retain,readonly) id value; 
@property (readonly) unsigned long long count; 
-(id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4 ;
-(NSString *)attribute;
-(void)dealloc;
-(unsigned long long)count;
-(id)value;
@end

