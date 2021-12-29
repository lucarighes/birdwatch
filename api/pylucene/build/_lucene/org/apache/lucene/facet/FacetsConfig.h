#ifndef org_apache_lucene_facet_FacetsConfig_H
#define org_apache_lucene_facet_FacetsConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig$DimConfig;
        class FacetsConfig$DrillDownTermsIndexing;
        namespace taxonomy {
          class TaxonomyWriter;
        }
      }
      namespace document {
        class Document;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsConfig : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_build_acd164ff868029a3,
            mid_build_a4a3ff91cfb48cb4,
            mid_getDimConfig_c977a2e632d40fa5,
            mid_getDimConfigs_1c3426541413a55d,
            mid_pathToString_03dae215009b5a7f,
            mid_pathToString_554e6a885e8e7cba,
            mid_pathToString_fae0305e95ad7426,
            mid_setDrillDownTermsIndexing_26fb6a5a7c23f6c4,
            mid_setHierarchical_b1180807b87ba737,
            mid_setIndexFieldName_15b72f6a44ff93f2,
            mid_setMultiValued_b1180807b87ba737,
            mid_setRequireDimCount_b1180807b87ba737,
            mid_setRequireDimensionDrillDown_b1180807b87ba737,
            mid_stringToPath_1606e23a23a4a8e5,
            mid_dedupAndEncode_887f798643eedba4,
            mid_getDefaultDimConfig_52c6450c342efb8b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsConfig(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsConfig(const FacetsConfig& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::facet::FacetsConfig$DimConfig *DEFAULT_DIM_CONFIG;
          static ::java::lang::String *DEFAULT_INDEX_FIELD_NAME;
          static jchar DELIM_CHAR;

          FacetsConfig();

          ::org::apache::lucene::document::Document build(const ::org::apache::lucene::document::Document &) const;
          ::org::apache::lucene::document::Document build(const ::org::apache::lucene::facet::taxonomy::TaxonomyWriter &, const ::org::apache::lucene::document::Document &) const;
          ::org::apache::lucene::facet::FacetsConfig$DimConfig getDimConfig(const ::java::lang::String &) const;
          ::java::util::Map getDimConfigs() const;
          static ::java::lang::String pathToString(const JArray< ::java::lang::String > &);
          static ::java::lang::String pathToString(const ::java::lang::String &, const JArray< ::java::lang::String > &);
          static ::java::lang::String pathToString(const JArray< ::java::lang::String > &, jint);
          void setDrillDownTermsIndexing(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsConfig$DrillDownTermsIndexing &) const;
          void setHierarchical(const ::java::lang::String &, jboolean) const;
          void setIndexFieldName(const ::java::lang::String &, const ::java::lang::String &) const;
          void setMultiValued(const ::java::lang::String &, jboolean) const;
          void setRequireDimCount(const ::java::lang::String &, jboolean) const;
          void setRequireDimensionDrillDown(const ::java::lang::String &, jboolean) const;
          static JArray< ::java::lang::String > stringToPath(const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsConfig);
        extern PyTypeObject *PY_TYPE(FacetsConfig);

        class t_FacetsConfig {
        public:
          PyObject_HEAD
          FacetsConfig object;
          static PyObject *wrap_Object(const FacetsConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
