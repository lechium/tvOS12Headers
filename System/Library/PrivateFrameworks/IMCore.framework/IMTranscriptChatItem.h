/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMChatItem.h>

@class NSString;

@interface IMTranscriptChatItem : IMChatItem {

	NSString* _guid;
	unsigned char _contiguousType;
	unsigned char _attachmentContiguousType;
	unsigned _contiguousLoaded : 1;

}

@property (setter=_setGUID:,nonatomic,copy) NSString * guid;                        //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) unsigned char contiguousType; 
@property (nonatomic,readonly) unsigned char attachmentContiguousType; 
@property (getter=isContiguous,nonatomic,readonly) BOOL contiguous; 
-(NSString *)guid;
-(BOOL)isContiguousWithChatItem:(id)arg1 ;
-(BOOL)isAttachmentContiguousWithChatItem:(id)arg1 ;
-(unsigned char)contiguousType;
-(unsigned char)attachmentContiguousType;
-(BOOL)_isContiguousLoaded;
-(void)_setContiguousLoaded:(BOOL)arg1 ;
-(void)_setContiguousType:(unsigned char)arg1 ;
-(void)_setAttachmentContiguousType:(unsigned char)arg1 ;
-(void)_setGUID:(id)arg1 ;
-(BOOL)isContiguous;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

