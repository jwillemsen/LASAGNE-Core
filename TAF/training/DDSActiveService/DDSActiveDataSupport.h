#ifndef LTM_DDSACTIVEDATASUPPORT_H
#define LTM_DDSACTIVEDATASUPPORT_H

#include "DDSActiveServiceC.h"

#if defined(TAF_USES_DDSCORBA)

# include "DDSActiveServiceS.h"

#elif defined(TAF_USES_NDDS)

# include "DDSActiveService.h"

#elif defined(TAF_USES_COREDX)

# include "DDSActiveService.hh"

#elif defined(TAF_USES_OPENSPLICE)

# include "ccpp_DDSActiveService.h"

#endif

#if defined(TAF_USES_OPENDDS)

# include "DDSActiveServiceTypeSupportC.h"
# include "DDSActiveServiceTypeSupportS.h"
# include "DDSActiveServiceTypeSupportImpl.h"

#elif defined(TAF_USES_NDDS)

# include "DDSActiveServiceSupport.h"
# include "DDSActiveServicePlugin.h"

#elif defined(TAF_USES_COREDX)

# include "DDSActiveServiceTypeSupport.hh"
# include "DDSActiveServiceDataReader.hh"
# include "DDSActiveServiceDataWriter.hh"

#elif defined(TAF_USES_OPENSPLICE)

#if defined(TAF_USES_DDSCORBA)
# include "DDSActiveServiceDcpsC.h"
#else
# include "DDSActiveServiceDcps.h"
#endif

# include "DDSActiveServiceDcps_impl.h"

#endif

#include "dds/DDSPubSub.h"

namespace LTM
{
#if !defined(DEFINE_DDS_TYPESUPPORT_ltm_LTMTopicDetails)
#   define  DEFINE_DDS_TYPESUPPORT_ltm_LTMTopicDetails
# if defined(TAF_USES_DDSCORBA)
    typedef DEFINE_DDS_TYPESUPPORT(ltm, LTMTopicDetails)        LTMTopicDetailsDataSupport;
    typedef LTMTopicDetailsDataSupport::_data_holder_type       LTMTopicDetailsHolderType;
    typedef LTMTopicDetailsDataSupport::_data_type              LTMTopicDetailsTopicType;
    typedef LTMTopicDetailsDataSupport::_data_type              LTMTopicDetailsCORBAType;
    typedef LTMTopicDetailsTopicType                            LTMTopicDetailsTopicAdapter;
    typedef LTMTopicDetailsCORBAType                            LTMTopicDetailsCORBAdapter;
# else
    typedef DEFINE_DDS_TYPESUPPORT(ltm_dds, LTMTopicDetails)    LTMTopicDetailsDataSupport;
    typedef LTMTopicDetailsDataSupport::_data_holder_type       LTMTopicDetailsHolderType;
    typedef LTMTopicDetailsDataSupport::_data_type              LTMTopicDetailsTopicType;
    typedef ltm::LTMTopicDetails                                LTMTopicDetailsCORBAType;
    struct DDSActiveService_Export LTMTopicDetailsTopicAdapter : LTMTopicDetailsHolderType {
        LTMTopicDetailsTopicAdapter(void)  {}
        LTMTopicDetailsTopicAdapter(const LTMTopicDetailsCORBAType &);
    };
    struct DDSActiveService_Export LTMTopicDetailsCORBAdapter  : LTMTopicDetailsCORBAType  {
        LTMTopicDetailsCORBAdapter(void)   {}
        LTMTopicDetailsCORBAdapter(const LTMTopicDetailsTopicType &);
    };
# endif
#endif
}

#endif // LTM_DDSACTIVEDATASUPPORT_H