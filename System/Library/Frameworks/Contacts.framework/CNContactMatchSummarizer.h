/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@interface CNContactMatchSummarizer : NSObject {

	CFStringTokenizerRef _tokenizer;

}
+(id)summaryProperties;
+(id)keyDescriptorForContactIdentifiers:(id)arg1 matchInfos:(id)arg2 ;
+(id)summaryPropertyForMatchInfo:(id)arg1 ;
-(id)summaryForContact:(id)arg1 matchInfo:(id)arg2 ;
-(id)attributedStringForPropertyValueString:(id)arg1 queryTerms:(id)arg2 outMatchCount:(unsigned long long*)arg3 ;
-(id)summariesFutureForContactsIdentifiers:(id)arg1 matchInfos:(id)arg2 contactStore:(id)arg3 scheduler:(id)arg4 ;
-(id)init;
-(void)dealloc;
@end

