//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNCancelable-Protocol.h>

@class CNAutocompleteDelegateWrapper, CNAutocompleteFetchRequest, CNAutocompleteUserSession, CNCancelationToken, NSString;
@protocol CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNAutocompleteSourceInclusionPolicy, CNCancelable, CNScheduler;

@interface CNAutocompleteQuery : NSObject <CNCancelable>
{
    CNAutocompleteFetchRequest *_request;
    CNAutocompleteDelegateWrapper *_delegate;
    id <CNScheduler> _scheduler;
    CNCancelationToken *_cancelationToken;
    id <CNAutocompleteSearchProvider> _searchProvider;
    id <CNAutocompleteProbeProvider> _probeProvider;
    CNAutocompleteUserSession *_userSession;
    id <CNCancelable> _delegateToken;
    id <CNAutocompleteSourceInclusionPolicy> _sourceInclusionPolicy;
}

+ (id)observableWithSupplementalResultsForQuery:(id)arg1;
+ (void)configureNetworkActivityHandlersForBuilder:(id)arg1 query:(id)arg2;
+ (void)configureNetworkPolicyForBuilder:(id)arg1 query:(id)arg2;
+ (void)configureNetworkForBuilder:(id)arg1 query:(id)arg2;
+ (_Bool)shouldPerformQueryForRequest:(id)arg1;
+ (id)observableForQuery:(id)arg1 context:(id)arg2;
+ (_Bool)shouldSortResultsForPolicy:(id)arg1;
+ (_Bool)searchTypeSupportsSuppressionOfAlreadyChosenAddresses:(unsigned long long)arg1;
+ (_Bool)shouldSuppressAddressesAlreadyChosenForRequest:(id)arg1;
+ (id)queryWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7;
@property(retain) id <CNAutocompleteSourceInclusionPolicy> sourceInclusionPolicy; // @synthesize sourceInclusionPolicy=_sourceInclusionPolicy;
@property __weak id <CNCancelable> delegateToken; // @synthesize delegateToken=_delegateToken;
@property(retain) CNAutocompleteUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain) id <CNAutocompleteProbeProvider> probeProvider; // @synthesize probeProvider=_probeProvider;
@property(retain) id <CNAutocompleteSearchProvider> searchProvider; // @synthesize searchProvider=_searchProvider;
@property(retain) CNCancelationToken *cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(retain) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain) CNAutocompleteDelegateWrapper *delegate; // @synthesize delegate=_delegate;
@property(copy) CNAutocompleteFetchRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)cancel;
- (void)searchOperationsHaveFinished;
- (void)searchOperationsHaveEndedNetworkActivity;
- (void)searchOperationsHaveBegunNetworkActivity;
- (void)searchOperationEncounteredError:(id)arg1;
- (void)searchOperationReportedResults:(id)arg1;
- (id)executeWithContext:(id)arg1;
- (id)execute;
- (id)makeDelegateWrapperWithDelegate:(id)arg1 forRequest:(id)arg2 sourceInclusionPolicy:(id)arg3 userSession:(id)arg4;
- (id)initWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

