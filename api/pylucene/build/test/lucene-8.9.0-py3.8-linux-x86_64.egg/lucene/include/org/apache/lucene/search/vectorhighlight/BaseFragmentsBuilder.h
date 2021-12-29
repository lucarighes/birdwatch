#ifndef org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_BaseFragmentsBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace vectorhighlight {
          class FragmentsBuilder;
          class FieldFragList;
          class FieldFragList$WeightedFragInfo;
        }
        namespace highlight {
          class Encoder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class BaseFragmentsBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_createFragment_88fda903d6865251,
              mid_createFragment_23264a18dcb3de8b,
              mid_createFragments_96858e3aaaeddd60,
              mid_createFragments_59e4a59490ad9938,
              mid_getMultiValuedSeparator_8eea1dd85c3239c3,
              mid_getWeightedFragInfoList_e420eeaadf0bcd20,
              mid_isDiscreteMultiValueHighlighting_8454bd5aa23fd11e,
              mid_setDiscreteMultiValueHighlighting_9d72768e8fdce2b7,
              mid_setMultiValuedSeparator_b227b2c08d18d29e,
              mid_discreteMultiValueHighlighting_d34723982f24d8e2,
              mid_makeFragment_1d1a5dd34aecdce3,
              mid_getFragmentSourceMSO_af70c7693cb17992,
              mid_getFragmentSource_29d43192188dc845,
              mid_getPreTag_d7593acad64ef635,
              mid_getPreTag_fae0305e95ad7426,
              mid_getPostTag_fae0305e95ad7426,
              mid_getPostTag_d7593acad64ef635,
              mid_getFields_e6c7b90f33cbb580,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseFragmentsBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BaseFragmentsBuilder(const BaseFragmentsBuilder& obj) : ::java::lang::Object(obj) {}

            static JArray< ::java::lang::String > *COLORED_POST_TAGS;
            static JArray< ::java::lang::String > *COLORED_PRE_TAGS;

            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &) const;
            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            jchar getMultiValuedSeparator() const;
            ::java::util::List getWeightedFragInfoList(const ::java::util::List &) const;
            jboolean isDiscreteMultiValueHighlighting() const;
            void setDiscreteMultiValueHighlighting(jboolean) const;
            void setMultiValuedSeparator(jchar) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(BaseFragmentsBuilder);
          extern PyTypeObject *PY_TYPE(BaseFragmentsBuilder);

          class t_BaseFragmentsBuilder {
          public:
            PyObject_HEAD
            BaseFragmentsBuilder object;
            static PyObject *wrap_Object(const BaseFragmentsBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
