/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, NSString, NSDate, NSDictionary;

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem {

	IMAssociatedMessageGeometryDescriptor _geometryDescriptor;
	BOOL _parentMessageIsFromMe;
	IMHandle* _sender;

}

@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL parentMessageIsFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSString * associatedMessageGUID; 
@property (nonatomic,readonly) long long associatedMessageType; 
@property (nonatomic,readonly) NSRange associatedMessageRange; 
@property (nonatomic,readonly) IMAssociatedMessageGeometryDescriptor geometryDescriptor;              //@synthesize geometryDescriptor=_geometryDescriptor - In the implementation block
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender;                                                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) NSDictionary * messageSummaryInfo; 
-(NSDate *)time;
-(BOOL)isFromMe;
-(NSString *)associatedMessageGUID;
-(long long)associatedMessageType;
-(NSDictionary *)messageSummaryInfo;
-(BOOL)failed;
-(void)_setParentMessageIsFromMe:(BOOL)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 ;
-(id)_imAssociatedMessageItem;
-(NSRange)associatedMessageRange;
-(BOOL)parentMessageIsFromMe;
-(IMAssociatedMessageGeometryDescriptor)geometryDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)message;
-(IMHandle *)sender;
@end
