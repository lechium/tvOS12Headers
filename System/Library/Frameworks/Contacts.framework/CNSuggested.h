/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SGRecordId, NSString;


@protocol CNSuggested <NSObject>
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@property (nonatomic,readonly) NSString * suggestionFoundInBundleId; 
@required
-(SGRecordId *)suggestionRecordId;
-(NSString *)suggestionFoundInBundleId;
-(BOOL)isSuggested;

@end

