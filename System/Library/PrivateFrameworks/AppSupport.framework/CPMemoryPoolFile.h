/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@interface CPMemoryPoolFile : NSObject {

	opaque_pthread_mutex_t _mutex;
	int _fd;
	char* _slots;
	unsigned long long _slotCount;
	unsigned long long _slotLength;
	CFBitVectorRef _usedSlots;
	CFAllocatorRef _deallocator;

}
-(id)initWithLabel:(const char*)arg1 slotCount:(unsigned long long)arg2 slotLength:(unsigned long long)arg3 ;
-(void)returnSlot:(void*)arg1 ;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
@end

