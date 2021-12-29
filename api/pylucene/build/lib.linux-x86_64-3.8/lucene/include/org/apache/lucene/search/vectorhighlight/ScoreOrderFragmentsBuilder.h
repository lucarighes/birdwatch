#ifndef org_apache_lucene_search_vectorhighlight_ScoreOrderFragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_ScoreOrderFragmentsBuilder_H

#include "org/apache/lucene/search/vectorhighlight/BaseFragmentsBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class BoundaryScanner;
          class FieldFragList$WeightedFragInfo;
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

          class ScoreOrderFragmentsBuilder : public ::org::apache::lucene::search::vectorhighlight::BaseFragmentsBuilder {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_2c463cdfa06312df,
              mid_init$_d48c3e85eaff05d2,
              mid_init$_68492bd2e5986041,
              mid_getWeightedFragInfoList_e420eeaadf0bcd20,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScoreOrderFragmentsBuilder(jobject obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragmentsBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScoreOrderFragmentsBuilder(const ScoreOrderFragmentsBuilder& obj) : ::org::apache::lucene::search::vectorhighlight::BaseFragmentsBuilder(obj) {}

            ScoreOrderFragmentsBuilder();
            ScoreOrderFragmentsBuilder(const ::org::apache::lucene::search::vectorhighlight::BoundaryScanner &);
            ScoreOrderFragmentsBuilder(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &);
            ScoreOrderFragmentsBuilder(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::vectorhighlight::BoundaryScanner &);

            ::java::util::List getWeightedFragInfoList(const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(ScoreOrderFragmentsBuilder);
          extern PyTypeObject *PY_TYPE(ScoreOrderFragmentsBuilder);

          class t_ScoreOrderFragmentsBuilder {
          public:
            PyObject_HEAD
            ScoreOrderFragmentsBuilder object;
            static PyObject *wrap_Object(const ScoreOrderFragmentsBuilder&);
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
